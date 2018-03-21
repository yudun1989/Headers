//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBTaoPasswordShareItem : NSObject
{
    NSString *_title;
    NSString *_taoPassword;
    NSString *_leftButtonText;
    NSString *_rightButtonText;
    CDUnknownBlockType _leftButtonTapBlock;
    CDUnknownBlockType _rightButtonTapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType rightButtonTapBlock; // @synthesize rightButtonTapBlock=_rightButtonTapBlock;
@property(copy, nonatomic) CDUnknownBlockType leftButtonTapBlock; // @synthesize leftButtonTapBlock=_leftButtonTapBlock;
@property(retain, nonatomic) NSString *rightButtonText; // @synthesize rightButtonText=_rightButtonText;
@property(retain, nonatomic) NSString *leftButtonText; // @synthesize leftButtonText=_leftButtonText;
@property(retain, nonatomic) NSString *taoPassword; // @synthesize taoPassword=_taoPassword;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

