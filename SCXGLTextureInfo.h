//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext, NSString;
@protocol OS_dispatch_queue;

@interface SCXGLTextureInfo : NSObject
{
    unsigned int _name;
    EAGLContext *_deletionContext;
    NSObject<OS_dispatch_queue> *_textureDeletionQueue;
    NSString *_identifier;
    struct CGSize _size;
    struct UIEdgeInsets _transparentPaddingInsets;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) EAGLContext *deletionContext; // @synthesize deletionContext=_deletionContext;
- (id)description;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithName:(unsigned int)arg1 size:(struct CGSize)arg2 transparentPaddingInsets:(struct UIEdgeInsets)arg3 deletionContext:(id)arg4 deletionQueue:(id)arg5 identifier:(id)arg6;
@property(readonly, nonatomic) unsigned int name; // @synthesize name=_name;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *textureDeletionQueue; // @synthesize textureDeletionQueue=_textureDeletionQueue;
@property(readonly, nonatomic) struct UIEdgeInsets transparentPaddingInsets; // @synthesize transparentPaddingInsets=_transparentPaddingInsets;

@end

