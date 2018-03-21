//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VKRequest.h"

@class NSOperation, UIImage, VKImageParameters;

@interface VKUploadPhotoBase : VKRequest
{
    long long _albumId;
    long long _groupId;
    long long _userId;
    VKImageParameters *_imageParameters;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) VKImageParameters *imageParameters; // @synthesize imageParameters=_imageParameters;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long albumId; // @synthesize albumId=_albumId;
- (void).cxx_destruct;
- (id)methodName;
- (id)getSaveRequest:(id)arg1;
- (id)getServerRequest;
- (id)createExecutionOperation;
- (id)initWithImage:(id)arg1 parameters:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSOperation *executionOperation; // @dynamic executionOperation;

@end

