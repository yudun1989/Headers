//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface SpritePackageBubble : QQModel
{
    _Bool _showed;
    _Bool _taped;
    int _packageId;
    int _showCount;
    double _startTs;
    double _receiveTs;
    double _interval;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int showCount; // @synthesize showCount=_showCount;
@property(nonatomic) _Bool taped; // @synthesize taped=_taped;
@property(nonatomic) _Bool showed; // @synthesize showed=_showed;
@property(nonatomic) int packageId; // @synthesize packageId=_packageId;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) double receiveTs; // @synthesize receiveTs=_receiveTs;
@property(nonatomic) double startTs; // @synthesize startTs=_startTs;
- (void)dealloc;
- (id)initWithDicionary:(id)arg1;

@end

