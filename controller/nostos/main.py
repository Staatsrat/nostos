from fastapi import FastAPI
from pydantic import BaseModel

app = FastAPI()
entries = []

class EntryCreate(BaseModel):
    com: str
    out: str

@app.post("/create/")
async def create(entry_data: EntryCreate):
    entries.append(entry_data.model_dump())
    return {"msg": "created", "entry": entry_data.model_dump()}

@app.get("/entries")
async def get_entries():
    return entries

@app.get("/entries/{out}")
async def get_entry(out: str):
    for e in entries:
        if e["com"] == com:
            return e
    return {"detail": "Not found"}
