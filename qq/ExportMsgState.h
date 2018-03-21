//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface ExportMsgState : NSObject
{
    NSRecursiveLock *_lock;
    NSMutableArray *_fileItemArr;
    int _state;
    unsigned long long _uploadFileListSeq;
}

@property(nonatomic) unsigned long long uploadFileListSeq; // @synthesize uploadFileListSeq=_uploadFileListSeq;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)reset;
- (double)getFinishedPercent;
- (_Bool)isFinished;
- (_Bool)isUploading;
- (id)getTmpFileforSeq:(unsigned long long)arg1;
- (id)getAllFileItem;
- (id)getAllReqSeq;
- (void)updateUploadedSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2 forSeq:(unsigned long long)arg3;
- (void)setFinishedForSeq:(unsigned long long)arg1;
- (void)addItem:(id)arg1;
- (id)init;

@end

