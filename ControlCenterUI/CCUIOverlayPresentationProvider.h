/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 25, 2018 at 11:29:33 PM Eastern European Standard Time
* Operating System: Version 11.1.2 (Build 15B202)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCUIOverlayPresentationProvider <NSObject>
@property (getter=isPanDismissalAvailable,nonatomic,readonly) BOOL panDismissalAvailable; 
@property (nonatomic,readonly) unsigned long long backgroundMaterialOptions; 
@property (nonatomic,readonly) BOOL allowHotPocketDuringTransition; 
@property (assign,nonatomic,weak) id<CCUIOverlayViewProvider> viewProvider; 
@property (assign,nonatomic,weak) id<CCUIOverlayMetricsProvider> metricsProvider; 
@property (nonatomic,readonly) unsigned long long headerMode; 
@property (nonatomic,copy,readonly) id<CCUIOverlayFlickGestureBehavior> flickGestureBehavior; 
@optional
-(id)secondaryAnimationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
-(id)prepareForPresentation;
-(id)cleanupForDismissal;
-(unsigned long long)headerMode;
-(id<CCUIOverlayFlickGestureBehavior>)flickGestureBehavior;

@required
-(void)layoutViews;
-(id<CCUIOverlayMetricsProvider>)metricsProvider;
-(id<CCUIOverlayViewProvider>)viewProvider;
-(id)transitionStateForType:(unsigned long long)arg1 interactive:(BOOL)arg2 translation:(CGPoint)arg3;
-(unsigned long long)finalTransitionTypeForState:(id)arg1 gestureTranslation:(CGPoint)arg2 gestureVelocity:(CGPoint)arg3;
-(id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
-(BOOL)tapAllowsDismissalForLocation:(CGPoint)arg1;
-(BOOL)isPanDismissalAvailable;
-(unsigned long long)backgroundMaterialOptions;
-(BOOL)allowHotPocketDuringTransition;
-(void)setViewProvider:(id)arg1;
-(void)setMetricsProvider:(id)arg1;

@end

