//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ZZChannelOutput-Protocol.h"

@class NSMutableData;

@interface ZZDataChannelOutput : NSObject <ZZChannelOutput>
{
    NSMutableData *_allData;
    unsigned int _offset;
}

- (void).cxx_destruct;
- (void)close;
- (id)initWithData:(id)arg1;
- (unsigned int)offset;
- (_Bool)seekToOffset:(unsigned int)arg1 error:(out id *)arg2;
- (_Bool)truncateAtOffset:(unsigned int)arg1 error:(out id *)arg2;
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;

@end

