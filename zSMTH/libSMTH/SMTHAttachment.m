//
//  SMTHAttachment.m
//  zSMTH
//
//  Created by Zhengfa DANG on 2015-3-28.
//  Copyright (c) 2015 Zhengfa. All rights reserved.
//

#import "SMTHAttachment.h"

@implementation SMTHAttachment

@synthesize attName;
@synthesize attPos;
@synthesize attSize;
@synthesize imgHeight;
@synthesize loaded;

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.loaded = NO;
    }
    return self;
}

@end
