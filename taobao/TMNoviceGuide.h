//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@interface TMNoviceGuide : NSObject <NSCoding>
{
    _Bool _isDisplayed;
    int direction;
    int type;
    id object;
}

@property(nonatomic) _Bool isDisplayed; // @synthesize isDisplayed=_isDisplayed;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) int direction; // @synthesize direction;
@property(nonatomic) id object; // @synthesize object;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

