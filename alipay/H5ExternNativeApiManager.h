//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface H5ExternNativeApiManager : NSObject
{
    NSMutableDictionary *_externNativeApis;
}

@property(retain, nonatomic) NSMutableDictionary *externNativeApis; // @synthesize externNativeApis=_externNativeApis;
- (void).cxx_destruct;
- (void)callExternNativeApi:(id)arg1 webviewcontroller:(id)arg2;
- (void)registerExternNativeApis:(id)arg1;
- (id)init;

@end

