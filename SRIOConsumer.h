//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SRIOConsumer : NSObject
{
    CDUnknownBlockType _scanner;
    CDUnknownBlockType _handler;
    unsigned long long _bytesNeeded;
    _Bool _readToCurrentFrame;
    _Bool _unmaskBytes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bytesNeeded; // @synthesize bytesNeeded=_bytesNeeded;
@property(readonly, copy, nonatomic) CDUnknownBlockType consumer; // @synthesize consumer=_scanner;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) _Bool readToCurrentFrame; // @synthesize readToCurrentFrame=_readToCurrentFrame;
- (void)resetWithScanner:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2 bytesNeeded:(unsigned long long)arg3 readToCurrentFrame:(_Bool)arg4 unmaskBytes:(_Bool)arg5;
@property(readonly, nonatomic) _Bool unmaskBytes; // @synthesize unmaskBytes=_unmaskBytes;

@end

