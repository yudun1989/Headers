//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WVBridgePermission : NSObject
{
    BOOL _permitted;
    NSDictionary *_errorInfo;
    NSString *_message;
}

+ (id)permissionNotSure;
+ (id)permissionDenied:(id)arg1;
+ (id)permissionAllowed;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSDictionary *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(readonly, nonatomic, getter=isPermitted) BOOL permitted; // @synthesize permitted=_permitted;
- (void).cxx_destruct;
- (id)initWithPermitted:(BOOL)arg1 withErrorInfo:(id)arg2;
- (id)init;
- (void)setIsPermitted:(_Bool)arg1;

@end

