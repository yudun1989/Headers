//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

#import <QQMainProject/ITBPBGetData-Protocol.h>

@class NSString;

@interface TBReqAddFeedComment : QQModel <ITBPBGetData>
{
    unsigned int _commentState;
    int _source;
    unsigned int _type;
    NSString *_feedID;
    NSString *_replyUnionID;
    NSString *_content;
    unsigned long long _fakeID;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) unsigned int commentState; // @synthesize commentState=_commentState;
@property(nonatomic) unsigned long long fakeID; // @synthesize fakeID=_fakeID;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *replyUnionID; // @synthesize replyUnionID=_replyUnionID;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)getRequestPBData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

