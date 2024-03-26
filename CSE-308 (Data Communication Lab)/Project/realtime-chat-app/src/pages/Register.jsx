import React from "react";
import Avatar from "../assets/avatar.png";

const Register = () => {
  return (
    <>
      <div className="formContainer">
        <div className="formWrapper">
          <span className="logo">Realtime Chat App</span>
          <span className="title">Register here</span>
          <form action="">
            <input type="text" name="" id="" placeholder="Display Name" />
            <input type="email" name="" id="" placeholder="Email" />
            <input type="password" name="" id="" placeholder="Password" />
            <input type="file" name="" id="" style={{ display: "none" }} />
            <label htmlFor="file">
              <img src={Avatar} alt="" />
              <span>Add an avatar</span>
            </label>
            <button>Sign up</button>
          </form>
        </div>
      </div>
    </>
  );
};

export default Register;
