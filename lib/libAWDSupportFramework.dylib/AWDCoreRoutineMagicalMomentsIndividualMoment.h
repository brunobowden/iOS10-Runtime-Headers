/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineMagicalMomentsIndividualMoment : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int modelType : 1; 
    }  _has;
    int  _modelType;
    unsigned long long  _timestamp;
}

@property (nonatomic) BOOL hasModelType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int modelType;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasModelType;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)modelType;
- (BOOL)readFrom:(id)arg1;
- (void)setHasModelType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setModelType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end