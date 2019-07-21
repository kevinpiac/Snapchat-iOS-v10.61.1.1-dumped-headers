//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTLArgumentEncoder-Protocol.h"

@class NSString;
@protocol MTLDevice;

@interface SCMockMetalArgumentEncoder : NSObject <MTLArgumentEncoder>
{
    id <MTLDevice> _device;
    NSString *_label;
    unsigned long long _encodedLength;
    unsigned long long _alignment;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long alignment; // @synthesize alignment=_alignment;
- (void *)constantDataAtIndex:(unsigned long long)arg1;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly) unsigned long long encodedLength; // @synthesize encodedLength=_encodedLength;
@property(copy) NSString *label; // @synthesize label=_label;
- (id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setIndirectCommandBuffers:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

