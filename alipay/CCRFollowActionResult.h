//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CCRFollowActionResult : NSObject
{
    _Bool _success;
    int _resultCode;
    int _showType;
    NSString *_followAction;
    NSString *_resultView;
    NSString *_baseExt;
}

@property(retain, nonatomic) NSString *baseExt; // @synthesize baseExt=_baseExt;
@property(retain, nonatomic) NSString *resultView; // @synthesize resultView=_resultView;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSString *followAction; // @synthesize followAction=_followAction;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

