//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMtopRequest.h"

@class NSString;

@interface GDCybertronFeedDetailRequest : GDMtopRequest
{
    NSString *_title;
    NSString *_summary;
    NSString *_pic;
}

@property(retain) NSString *pic; // @synthesize pic=_pic;
@property(retain) NSString *summary; // @synthesize summary=_summary;
@property(retain) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)startLoadCybertronFeedDetailByFeedId:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (_Bool)procResultDataFromJson:(id)arg1;
- (id)methodName;
- (id)init;

@end

