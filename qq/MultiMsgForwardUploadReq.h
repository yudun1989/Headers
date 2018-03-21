//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, QQMessageModel;

@interface MultiMsgForwardUploadReq : NSObject
{
    NSString *_uuid;
    QQMessageModel *_multiMsgModel;
    NSMutableArray *_picMsgmodels;
    NSMutableArray *_richMediaPbMsgModel;
    NSMutableArray *_shortVideoModels;
    int _forwardStage;
    int _xo;
    _Bool _bForward;
    _Bool _bImageInvalid;
}

@property(nonatomic) _Bool bImageInvalid; // @synthesize bImageInvalid=_bImageInvalid;
@property(nonatomic) _Bool bForward; // @synthesize bForward=_bForward;
@property(retain, nonatomic) NSMutableArray *shortVideoModels; // @synthesize shortVideoModels=_shortVideoModels;
- (id)description;
- (void)dealloc;
- (id)initWithQQMessageModel:(id)arg1;

// Remaining properties
@property(nonatomic) int forwardStage; // @dynamic forwardStage;
@property(retain, nonatomic) QQMessageModel *multiMsgModel; // @dynamic multiMsgModel;
@property(retain, nonatomic) NSMutableArray *picMsgmodels; // @dynamic picMsgmodels;
@property(retain, nonatomic) NSMutableArray *richMediaPbMsgModel; // @dynamic richMediaPbMsgModel;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

