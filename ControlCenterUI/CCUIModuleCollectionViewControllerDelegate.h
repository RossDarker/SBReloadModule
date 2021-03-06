/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 25, 2018 at 11:29:33 PM Eastern European Standard Time
* Operating System: Version 11.1.2 (Build 15B202)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCUIModuleCollectionViewControllerDelegate <NSObject>
@required
-(long long)interfaceOrientationForModuleCollectionViewController:(id)arg1;
-(void)moduleCollectionViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
-(id)obscuringBackgroundViewForModuleCollectionViewController:(id)arg1;
-(void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2;
-(void)moduleCollectionViewController:(id)arg1 willRemoveModuleContainerViewController:(id)arg2;

@end

