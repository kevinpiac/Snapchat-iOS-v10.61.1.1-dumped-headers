//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCWebServerBodyEncoder.h"

@interface SCWebServerGZipEncoder : SCWebServerBodyEncoder
{
    struct z_stream_s _stream;
    _Bool _finished;
}

- (void)close;
- (id)initWithResponse:(id)arg1 reader:(id)arg2;
- (_Bool)open:(id *)arg1;
- (id)readData:(id *)arg1;

@end

