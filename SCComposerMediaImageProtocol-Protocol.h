//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@protocol SCComposerMediaImageProtocol <NSObject, SCComposerJsConvertible>
- (void)cropWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 callback:(void (^)(id <SCComposerMediaImageProtocol>, NSString *))arg5;
- (void)dispose;
- (double)getHeight;
- (void)getPngDataWithCallback:(void (^)(NSData *, NSString *))arg1;
- (double)getWidth;
- (void)resizeWithWidth:(double)arg1 height:(double)arg2 callback:(void (^)(id <SCComposerMediaImageProtocol>, NSString *))arg3;
- (void)rotateWithAngle:(double)arg1 callback:(void (^)(id <SCComposerMediaImageProtocol>, NSString *))arg2;
@end

