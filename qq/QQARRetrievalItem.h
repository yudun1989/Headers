//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QQARLabelSource;

@interface QQARRetrievalItem : NSObject
{
    int _iClass;
    int _iSource;
    NSString *_sClass;
    double _dProb;
    NSString *_sItemID;
    QQARLabelSource *_stLabel;
    NSString *_sPicUrl;
    NSString *_sTitle;
    NSString *_sWiki;
    NSString *_sJumpUrl;
    const char *_sCdbRes;
}

@property(nonatomic) const char *sCdbRes; // @synthesize sCdbRes=_sCdbRes;
@property(retain, nonatomic) NSString *sJumpUrl; // @synthesize sJumpUrl=_sJumpUrl;
@property(retain, nonatomic) NSString *sWiki; // @synthesize sWiki=_sWiki;
@property(retain, nonatomic) NSString *sTitle; // @synthesize sTitle=_sTitle;
@property(retain, nonatomic) NSString *sPicUrl; // @synthesize sPicUrl=_sPicUrl;
@property(nonatomic) int iSource; // @synthesize iSource=_iSource;
@property(retain, nonatomic) QQARLabelSource *stLabel; // @synthesize stLabel=_stLabel;
@property(retain, nonatomic) NSString *sItemID; // @synthesize sItemID=_sItemID;
@property(nonatomic) double dProb; // @synthesize dProb=_dProb;
@property(retain, nonatomic) NSString *sClass; // @synthesize sClass=_sClass;
@property(nonatomic) int iClass; // @synthesize iClass=_iClass;
- (void).cxx_destruct;

@end

