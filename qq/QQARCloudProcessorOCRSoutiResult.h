//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQARCloudProcessorOCRSoutiResult : NSObject
{
    int _retCode;
    NSString *_errorcodeMsg;
    unsigned long long _question_id;
    NSString *_question_content;
    NSString *_jump_url;
}

@property(retain, nonatomic) NSString *jump_url; // @synthesize jump_url=_jump_url;
@property(retain, nonatomic) NSString *question_content; // @synthesize question_content=_question_content;
@property(nonatomic) unsigned long long question_id; // @synthesize question_id=_question_id;
@property(retain, nonatomic) NSString *errorcodeMsg; // @synthesize errorcodeMsg=_errorcodeMsg;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
- (void).cxx_destruct;
- (void)printLog;

@end

