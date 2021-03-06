/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 25, 2018 at 11:29:33 PM Eastern European Standard Time
* Operating System: Version 11.1.2 (Build 15B202)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import "CCUICAAnimationFactory.h"

@class CCUICABasicAnimationParameters, NSString;

@interface CCUICABasicAnimationFactory : NSObject <CCUICAAnimationFactory> {

	CCUICABasicAnimationParameters* _parameters;
	double _speed;

}

@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy,readonly) NSString * description;
@property (copy,readonly) NSString * debugDescription;
@property (nonatomic,readonly) double animationDuration;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(double)animationDuration;
-(id)_animation;
-(id)initWithParameters:(id)arg1 speed:(double)arg2 ;
@end
