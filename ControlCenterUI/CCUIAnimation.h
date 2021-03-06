/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 25, 2018 at 11:29:33 PM Eastern European Standard Time
* Operating System: Version 11.1.2 (Build 15B202)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import "NSCopying.h"

@protocol CCUIAnimationParameters;
@interface CCUIAnimation : NSObject <NSCopying> {

	id<CCUIAnimationParameters> _parameters;
	double _delay;
	double _speed;
	/*^block*/id _animations;

}

@property (nonatomic,copy,readonly) id<CCUIAnimationParameters> parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) double delay;                                             //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double speed;                                             //@synthesize speed=_speed - In the implementation block
@property (nonatomic,copy,readonly) id animations;                                       //@synthesize animations=_animations - In the implementation block
+(id)animationWithParameters:(id)arg1 animations:(/*^block*/id)arg2 ;
+(id)animationWithParameters:(id)arg1 delay:(double)arg2 animations:(/*^block*/id)arg3 ;
+(id)animationWithParameters:(id)arg1 delay:(double)arg2 speed:(double)arg3 animations:(/*^block*/id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)speed;
-(id<CCUIAnimationParameters>)parameters;
-(double)delay;
-(id)animations;
-(id)_initWithParameters:(id)arg1 delay:(double)arg2 speed:(double)arg3 animations:(/*^block*/id)arg4 ;
@end
