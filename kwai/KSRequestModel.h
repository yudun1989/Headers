//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSModel.h"

@class BFCancellationTokenSource, KSUHTTPRequest;

@interface KSRequestModel : KSModel
{
    KSUHTTPRequest *_request;
    BFCancellationTokenSource *_cancellationTokenSource;
}

@property(retain, nonatomic) BFCancellationTokenSource *cancellationTokenSource; // @synthesize cancellationTokenSource=_cancellationTokenSource;
@property(retain, nonatomic) KSUHTTPRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)cancel;
- (_Bool)isLoading;
- (void)load:(_Bool)arg1;
- (void)storeCachedResult:(id)arg1;
- (id)cachedResult;
- (id)initWithRequest:(id)arg1;

@end

