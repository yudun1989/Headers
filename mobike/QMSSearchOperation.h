//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QMSHTTPRequestOperation;

@interface QMSSearchOperation : NSObject
{
    QMSHTTPRequestOperation *_httpRequestOperation;
}

@property(retain, nonatomic) QMSHTTPRequestOperation *httpRequestOperation; // @synthesize httpRequestOperation=_httpRequestOperation;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (id)initWithHttpRequestOperation:(id)arg1;

@end

