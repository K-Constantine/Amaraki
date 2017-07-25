//
//  ViewController.swift
//  example
//
//  Created by mac on 7/25/17.
//  Copyright © 2017 mac. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    let test: SBTest = SBTest.create()!;
    
    @IBOutlet weak var myLabel: UILabel!
    
    @IBAction func clearText(_ sender: Any) {
        myLabel.text = ""; 
    }
    
    @IBAction func clickMeButton(_ sender: Any) {
        
        myLabel.text = "I am " + test.getName() + " :)";
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

