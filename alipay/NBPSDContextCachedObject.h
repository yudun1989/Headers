//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, PSDScene;
@protocol PSDEventTargetProtocol;

@interface NBPSDContextCachedObject : NSObject
{
    PSDScene *_currentScene;
    id <PSDEventTargetProtocol> _eventTarget;
    NSArray *_eventTargetList;
}

@property(nonatomic) __weak NSArray *eventTargetList; // @synthesize eventTargetList=_eventTargetList;
@property(nonatomic) __weak id <PSDEventTargetProtocol> eventTarget; // @synthesize eventTarget=_eventTarget;
@property(nonatomic) __weak PSDScene *currentScene; // @synthesize currentScene=_currentScene;
- (void).cxx_destruct;

@end

