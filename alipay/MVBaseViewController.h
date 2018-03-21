//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MVBaseViewController : DTViewController
{
    _Bool didInsetsSetted;
    NSMutableArray *automaticallyAdjustsInsetScrollViews;
    _Bool didRecordSqm_;
    NSString *_sqmCode;
    NSMutableDictionary *_propertyDict;
    NSMutableDictionary *_mtopOperations;
}

@property(retain, nonatomic) NSMutableDictionary *mtopOperations; // @synthesize mtopOperations=_mtopOperations;
@property(retain, nonatomic) NSMutableDictionary *propertyDict; // @synthesize propertyDict=_propertyDict;
@property(retain, nonatomic) NSString *sqmCode; // @synthesize sqmCode=_sqmCode;
- (void).cxx_destruct;
- (_Bool)shouldResetNavigationItem;
- (id)navigationItem;
- (id)tabBarController;
- (void)stopAllMtopOperation;
- (void)registerMtopOperationWithViewController:(id)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)back;
- (void)topBackButtonTapped:(id)arg1;
- (void)viewWillDestroy;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

