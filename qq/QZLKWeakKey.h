//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NSString, QZFeedScene;

@interface QZLKWeakKey : NSObject <NSCopying>
{
    id _realKey;
    QZFeedScene *_scene;
    NSString *_selfKey;
    unsigned long long _hashValue;
}

@property(nonatomic) unsigned long long hashValue; // @synthesize hashValue=_hashValue;
@property(retain, nonatomic) NSString *selfKey; // @synthesize selfKey=_selfKey;
@property(retain, nonatomic) QZFeedScene *scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id realKey; // @synthesize realKey=_realKey;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

