//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/BubbleAnimationProtocol-Protocol.h>

@class CADisplayLink, CALayer, NSArray, QQAIOCellView;

@interface BubbleAnimationView : NSObject <BubbleAnimationProtocol>
{
    NSArray *_animationImages;
    double _animationInterval;
    double _animationDuration;
    unsigned long long _animationCount;
    QQAIOCellView *_cellView;
    CALayer *_imageViewLayer;
    CALayer *_layer;
    int _xo;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _completionBlock;
    unsigned long long _currentIndex;
    double _playDuration;
    unsigned long long _playCount;
    double _elapsedTime;
    _Bool _hidden;
    struct CGRect _frame;
}

@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (void)changeImage:(id)arg1;
- (_Bool)isAnimating;
- (_Bool)isImageAnimating;
- (void)stopAnimatingWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)startAnimatingWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) CALayer *layer; // @dynamic layer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) unsigned long long animationCount; // @dynamic animationCount;
@property(nonatomic) double animationDuration; // @dynamic animationDuration;
@property(copy, nonatomic) NSArray *animationImages; // @dynamic animationImages;
@property(nonatomic) double animationInterval; // @dynamic animationInterval;
@property(nonatomic) __weak QQAIOCellView *cellView; // @dynamic cellView;
@property(retain, nonatomic) CALayer *imageViewLayer; // @dynamic imageViewLayer;

@end

