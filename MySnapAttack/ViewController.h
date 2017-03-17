//
//  ViewController.h
//  MySnapAttack
//
//  Created by Jason Crawford on 3/17/17.
//  Copyright © 2017 Jason Crawford. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    
    NSTimer *timer;
    NSTimer *imageTimer;
    
    int timeInt;
    int scoreInt;
    int gameMode;
    
}

@property (strong, nonatomic) IBOutlet UIImageView *imageview1;
@property (strong, nonatomic) IBOutlet UIImageView *imageView2;
@property (strong, nonatomic) IBOutlet UILabel *timeLabel;
@property (strong, nonatomic) IBOutlet UILabel *scoreLabel;
@property (strong, nonatomic) IBOutlet UIButton *startGameButton;

- (IBAction)startGame:(id)sender;


@end

