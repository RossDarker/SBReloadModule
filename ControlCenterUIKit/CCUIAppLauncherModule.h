/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 16, 2018 at 2:00:09 PM Central European Summer Time
* Operating System: Version 11.1.2 (Build 15B202)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import "CCUIContentModule.h"
#import "CCUIContentModuleContentViewController.h"

@class NSBundle, NSString, CCUIContentModuleContext, NSURL, UIImage, UIViewController;

@interface CCUIAppLauncherModule : NSObject <CCUIContentModule> {

	NSBundle* _bundle;
	BOOL _supportsApplicationShortcuts;
	NSString* _applicationIdentifier;
	NSString* _displayName;
	CCUIContentModuleContext* _contentModuleContext;
	NSURL* _launchURL;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                                                                 //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * launchURL;                                                                                //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                                           //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL supportsApplicationShortcuts;                                                              //@synthesize supportsApplicationShortcuts=_supportsApplicationShortcuts - In the implementation block
@property (nonatomic,copy,readonly) UIImage * iconGlyph;
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy,readonly) NSString * description;
@property (copy,readonly) NSString * debugDescription;
@property (nonatomic,readonly) UIViewController<CCUIContentModuleContentViewController>* contentViewController;
@property (nonatomic,readonly) UIViewController * backgroundViewController;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)init;
-(UIViewController<CCUIContentModuleContentViewController>*)contentViewController;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
-(NSString *)displayName;
-(UIImage *)iconGlyph;
-(id)launchURLForTouchType:(long long)arg1 ;
-(void)handleTapWithTouchType:(long long)arg1 ;
-(BOOL)supportsApplicationShortcuts;
-(void)setSupportsApplicationShortcuts:(BOOL)arg1 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(NSURL *)launchURL;
-(void)setLaunchURL:(NSURL *)arg1 ;
@end
