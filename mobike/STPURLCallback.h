//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLComponents;
@protocol STPURLCallbackListener;

@interface STPURLCallback : NSObject
{
    NSURLComponents *_urlComponents;
    id <STPURLCallbackListener> _listener;
}

@property(retain, nonatomic) id <STPURLCallbackListener> listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSURLComponents *urlComponents; // @synthesize urlComponents=_urlComponents;
- (void).cxx_destruct;

@end

