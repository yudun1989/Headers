//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FaceScoreMsgExInfo : NSObject
{
    _Bool _isLocalCreate;
    unsigned int _msgType;
    NSString *_coverUrl;
    NSArray *_tagArr;
    NSString *_summary;
    NSString *_action;
    NSString *_actionData;
}

@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSString *actionData; // @synthesize actionData=_actionData;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(nonatomic) _Bool isLocalCreate; // @synthesize isLocalCreate=_isLocalCreate;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSArray *tagArr; // @synthesize tagArr=_tagArr;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
- (void)dealloc;

@end

