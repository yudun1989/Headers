//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQCampusImageUploaderProtocol-Protocol.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface QCCImageUploader : NSObject <QQCampusImageUploaderProtocol>
{
    _Bool _cancelUpload;
    NSData *_sessionKey;
    NSMutableArray *_operations;
    NSMutableArray *_targetImages;
    NSMutableArray *_needUploadImages;
    NSMutableDictionary *_uploadedImages;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(retain, nonatomic) NSMutableDictionary *uploadedImages; // @synthesize uploadedImages=_uploadedImages;
@property(retain, nonatomic) NSMutableArray *needUploadImages; // @synthesize needUploadImages=_needUploadImages;
@property(retain, nonatomic) NSMutableArray *targetImages; // @synthesize targetImages=_targetImages;
- (_Bool)checkIfFinished;
- (_Bool)cancelUploadImage:(long long)arg1;
- (void)doFinish;
- (void)doFailure;
- (void)doUploadImages;
- (long long)uploadImages:(struct NSArray *)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

