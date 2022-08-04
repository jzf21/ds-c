import React from 'react'
import { Populars } from '../components/Populars'

export const Loginform = () => {
  return (
    <div class="container">
    <div class="card2 signup mx-5 pt-4 pb-4">
      <div class="card_title mb-5">
        <h1>Login To Your<br/> Account</h1>
        <span>New Here?  <a href="signup">Sign Up</a></span>
      </div>
      <div  class="form">
      <form name='login' action="/" method="post" data-netlify="true">
        <input className='mt-5' type="text" name="username" id="username" placeholder="UserName" />
       
        <input type="password" name="password" placeholder="Password" id="password" />
        
        <span><a className='text-sm' href="">Forgot Password?</a></span>
        <button className='mt-5' type='submit'>Login</button>

        </form>
      </div>

    
    </div>
  </div>
  )
}