//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol TADVideoReporterLogDelegate><TADVideoReporterNetworkDelegate;

@interface TADVideoReporterManager : NSObject
{
    NSMutableDictionary *_reporterDict;
    id <TADVideoReporterLogDelegate><TADVideoReporterNetworkDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <TADVideoReporterLogDelegate><TADVideoReporterNetworkDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportAndRemoveAllReporters;
- (id)cookieWithUrl:(id)arg1;
- (void)removeReporterByRequestID:(id)arg1;
- (id)getReporterByRequestID:(id)arg1;
- (id)init;

@end

