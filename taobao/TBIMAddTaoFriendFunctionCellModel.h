//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBIMAddTaoFriendFunctionCellModel : NSObject
{
    _Bool _isLastLine;
    NSString *_iconName;
    NSString *_title;
    NSString *_subTitle;
    long long _actionType;
    long long _iconNameBackgroundLeftColorValue;
    long long _iconNameBackgroundRightColorValue;
    double _height;
}

@property(nonatomic) _Bool isLastLine; // @synthesize isLastLine=_isLastLine;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) long long iconNameBackgroundRightColorValue; // @synthesize iconNameBackgroundRightColorValue=_iconNameBackgroundRightColorValue;
@property(nonatomic) long long iconNameBackgroundLeftColorValue; // @synthesize iconNameBackgroundLeftColorValue=_iconNameBackgroundLeftColorValue;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void).cxx_destruct;

@end

