//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString;

@interface TBStoryCardVideoInfoModel : QQModel
{
    unsigned int _totalLikeNum;
    unsigned int _totalCommentNum;
    NSString *_vid;
    NSString *_videoCover;
    NSString *_label;
    unsigned long long _viewTotalNum;
    NSString *_feedID;
    NSArray *_vidList;
}

+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSArray *vidList; // @synthesize vidList=_vidList;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned int totalCommentNum; // @synthesize totalCommentNum=_totalCommentNum;
@property(nonatomic) unsigned int totalLikeNum; // @synthesize totalLikeNum=_totalLikeNum;
@property(nonatomic) unsigned long long viewTotalNum; // @synthesize viewTotalNum=_viewTotalNum;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *videoCover; // @synthesize videoCover=_videoCover;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void)dealloc;

@end

