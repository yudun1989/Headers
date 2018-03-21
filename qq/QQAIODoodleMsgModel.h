//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOMsgModel.h>

@class DoodleInfo, QQAIOCommonCellView;

@interface QQAIODoodleMsgModel : QQAIOMsgModel
{
    _Bool _bIsSucces;
    DoodleInfo *_doodleInfo;
    long long _messageStatus;
    QQAIOCommonCellView *_bindCellView;
    double _process;
}

+ (id)modelWithMessageModel:(id)arg1;
@property(nonatomic) double process; // @synthesize process=_process;
@property(nonatomic) __weak QQAIOCommonCellView *bindCellView; // @synthesize bindCellView=_bindCellView;
@property(nonatomic) long long messageStatus; // @synthesize messageStatus=_messageStatus;
@property(retain, nonatomic) DoodleInfo *doodleInfo; // @synthesize doodleInfo=_doodleInfo;
@property(nonatomic) _Bool bIsSucces; // @synthesize bIsSucces=_bIsSucces;
- (void).cxx_destruct;
- (double)getDoodleHeight;
- (double)getDoodleWdith;
- (double)cellHeight;
- (id)eventHandleClassName;
- (id)cellViewClassName;
- (id)cellClassName;
- (id)initWithMessageModel:(id)arg1;
- (void)dealloc;

@end

