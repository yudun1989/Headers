//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOBaseBizAgent.h>

@class NSArray, UIView;

@interface QQAIOPokeBizAgent : QQAIOBaseBizAgent
{
    UIView *_emitterParentView;
    struct CGRect _emitterFrame;
    NSArray *_colorfulCells;
}

- (void).cxx_destruct;
- (id)cellWithImageName:(id)arg1 birthRate:(float)arg2;
- (id)colorfulCells;
- (id)emitterLayer;
- (void)setEmitterLayerFrame:(struct CGRect)arg1;
- (void)stopEmitter:(id)arg1;
- (void)startEmitter;
- (_Bool)isPokeCell:(id)arg1;
- (void)didEndDisplayingPokeCell:(id)arg1 atIndexPath:(id)arg2;
- (void)willDisplayPokeCell:(id)arg1 atIndexPath:(id)arg2;
- (id)pokeAtIndexPath:(id)arg1;
- (id)pokeAssociateWithCell:(id)arg1;
- (void)markUnreadPokesInMessages:(id)arg1;
- (void)markUnreadPoke:(id)arg1 shouldAutoPlay:(_Bool)arg2;

@end

