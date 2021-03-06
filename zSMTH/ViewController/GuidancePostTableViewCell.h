//
//  PostTableViewCell.h
//  zSMTH
//
//  Created by Zhengfa DANG on 2015-3-16.
//  Copyright (c) 2015 Zhengfa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GuidancePostTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imageAvatar;
@property (weak, nonatomic) IBOutlet UILabel *postSubject;
@property (weak, nonatomic) IBOutlet UILabel *postBoard;
@property (weak, nonatomic) IBOutlet UILabel *author;
@property (weak, nonatomic) IBOutlet UILabel *postCount;

@end
