//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNComposerBorderAttributeHandler-Protocol.h"

@interface SCComposerBorderAttributeHandler : NSObject <SCNComposerBorderAttributeHandler>
{
    CDUnknownBlockType _block;
    CDUnknownBlockType _resetBlock;
}

- (void).cxx_destruct;
- (void)applyAttribute:(id)arg1 topLeft:(double)arg2 topLeftIsPercent:(_Bool)arg3 topRight:(double)arg4 topRightIsPercent:(_Bool)arg5 bottomRight:(double)arg6 bottomRightIsPercent:(_Bool)arg7 bottomLeft:(double)arg8 bottomLeftIsPercent:(_Bool)arg9 animator:(id)arg10;
- (id)initWithBlock:(CDUnknownBlockType)arg1 resetBlock:(CDUnknownBlockType)arg2;
- (void)resetAttribute:(id)arg1 animator:(id)arg2;

@end
