import { useState } from "react";
import "./Chatlist.css";
import AddUser from "./AddUser/AddUser";

const Chatlist = () => {
  const [addMode, setAddMode] = useState(false);
  return (
    <div className="chatList">
      <div className="search">
        <div className="searchBar">
          <img src="./search.png" alt="" />
          <input type="text" placeholder="search" />
        </div>
        <img
          src={addMode ? "./minus.png" : "./plus.png"}
          alt=""
          className="add"
          onClick={() => setAddMode((prev) => !prev)}
        />
      </div>
      <div className="item">
        <img src="./avatar.png" alt="" />
        <div className="texts">
          <span>Abu Sayed</span>
          <p>Project Ready na re vai</p>
        </div>
      </div>
      <div className="item">
        <img src="./avatar.png" alt="" />
        <div className="texts">
          <span>Abu Sayed</span>
          <p>Project Ready na re vai</p>
        </div>
      </div>
      <div className="item">
        <img src="./avatar.png" alt="" />
        <div className="texts">
          <span>Abu Sayed</span>
          <p>Project Ready na re vai</p>
        </div>
      </div>
      {addMode && <AddUser />}
    </div>
  );
};

export default Chatlist;
