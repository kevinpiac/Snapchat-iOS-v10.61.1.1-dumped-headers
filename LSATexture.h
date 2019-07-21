//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext;

@interface LSATexture : NSObject
{
    shared_ptr_72f2ba33 _coreTexture;
    EAGLContext *_context;
}

+ (id)textureWithCoreTexture:(shared_ptr_a0cbdd2a)arg1 context:(void *)arg2;
+ (id)textureWithCoreTextureWithTransform:(shared_ptr_72f2ba33)arg1 context:(void *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
@property(readonly, nonatomic) EAGLContext *context;
- (void)dealloc;
- (id)initWithCoreTextureWithTransform:(shared_ptr_72f2ba33)arg1 context:(void *)arg2;
@property(readonly, nonatomic) struct CGSize size;
- (shared_ptr_72f2ba33)texture;
@property(readonly, nonatomic) int textureId;

@end

