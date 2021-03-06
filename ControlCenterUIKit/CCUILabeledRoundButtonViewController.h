/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 16, 2018 at 2:00:09 PM Central European Summer Time
* Operating System: Version 11.1.2 (Build 15B202)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString, CCUICAPackageDescription, UIImage, UIColor, CCUILabeledRoundButton, UIControl;

@interface CCUILabeledRoundButtonViewController : UIViewController {

	BOOL _labelsVisible;
	BOOL _toggleStateOnTap;
	BOOL _enabled;
	BOOL _inoperative;
	BOOL _useLightStyle;
	NSString* _subtitle;
	CCUICAPackageDescription* _glyphPackageDescription;
	NSString* _glyphState;
	UIImage* _glyphImage;
	UIColor* _highlightColor;
	CCUILabeledRoundButton* _buttonContainer;
	UIControl* _button;

}

@property (nonatomic,retain) UIColor * highlightColor;                                        //@synthesize highlightColor=_highlightColor - In the implementation block
@property (assign,nonatomic) BOOL useLightStyle;                                              //@synthesize useLightStyle=_useLightStyle - In the implementation block
@property (nonatomic,retain) CCUILabeledRoundButton * buttonContainer;                        //@synthesize buttonContainer=_buttonContainer - In the implementation block
@property (nonatomic,retain) UIControl * button;                                              //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) CCUICAPackageDescription * glyphPackageDescription;              //@synthesize glyphPackageDescription=_glyphPackageDescription - In the implementation block
@property (nonatomic,copy) NSString * glyphState;                                             //@synthesize glyphState=_glyphState - In the implementation block
@property (nonatomic,retain) UIImage * glyphImage;                                            //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle;                                               //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL labelsVisible;                                              //@synthesize labelsVisible=_labelsVisible - In the implementation block
@property (assign,nonatomic) BOOL toggleStateOnTap;                                           //@synthesize toggleStateOnTap=_toggleStateOnTap - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isInoperative,nonatomic) BOOL inoperative;                           //@synthesize inoperative=_inoperative - In the implementation block
-(UIControl *)button;
-(void)setTitle:(NSString *)arg1 ;
-(void)loadView;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setButton:(UIControl *)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(UIImage *)glyphImage;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(CCUILabeledRoundButton *)buttonContainer;
-(void)setButtonContainer:(CCUILabeledRoundButton *)arg1 ;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(void)setGlyphPackageDescription:(CCUICAPackageDescription *)arg1 ;
-(void)setGlyphState:(NSString *)arg1 ;
-(void)setLabelsVisible:(BOOL)arg1 ;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 ;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 ;
-(void)setInoperative:(BOOL)arg1 ;
-(CCUICAPackageDescription *)glyphPackageDescription;
-(NSString *)glyphState;
-(BOOL)labelsVisible;
-(BOOL)toggleStateOnTap;
-(void)setToggleStateOnTap:(BOOL)arg1 ;
-(BOOL)isInoperative;
-(BOOL)useLightStyle;
-(void)setUseLightStyle:(BOOL)arg1 ;
@end

