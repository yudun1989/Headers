//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBReqGeneralListModel.h>

@class NSString;

@interface TBReqGetCommentList : TBReqGeneralListModel
{
    unsigned int _latest_comment_id;
    NSString *_vid;
    NSString *_cookie;
}

@property(retain, nonatomic) NSString *cookie; // @synthesize cookie=_cookie;
@property(nonatomic) unsigned int latest_comment_id; // @synthesize latest_comment_id=_latest_comment_id;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void)dealloc;
- (id)getRequestPBData;

@end

