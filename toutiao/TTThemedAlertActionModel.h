//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TTThemedAlertActionElementModel;

@interface TTThemedAlertActionModel : NSObject
{
    NSString *_actionTitle;
    long long _actionType;
    CDUnknownBlockType _actionBlock;
    TTThemedAlertActionElementModel *_actionElementModel;
}

@property(retain, nonatomic) TTThemedAlertActionElementModel *actionElementModel; // @synthesize actionElementModel=_actionElementModel;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
- (void).cxx_destruct;
- (id)initWithAlertType:(long long)arg1 actionType:(long long)arg2 actionTitle:(id)arg3 actionBlock:(CDUnknownBlockType)arg4;

@end

