//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapCustomGLLayer-Protocol.h"

@class NSString;

@interface SCXBlockBasedCustomGLLayer : NSObject <SCMapCustomGLLayer>
{
    CDUnknownBlockType _preparation;
    CDUnknownBlockType _drawing;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)complete;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)draw:(struct SCMapCustomGLContext)arg1;
@property(copy, nonatomic) CDUnknownBlockType drawing; // @synthesize drawing=_drawing;
- (id)initWithPreparation:(CDUnknownBlockType)arg1 drawing:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType preparation; // @synthesize preparation=_preparation;
- (void)prepare;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
