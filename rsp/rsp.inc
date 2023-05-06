/* Common assembler directives for RSP programs.  */

/* Memory Regions.  */
.set SP_DMEM_START, 0x04000000
.set SP_DMEM_SIZE, 0x1000

.set SP_IMEM_START, SP_DMEM_START + SP_DMEM_SIZE
.set SP_IMEM_SIZE, 0x1000

/* RSP COP0 register names.  */
.set SP_MEM_ADDR,  $0
.set SP_DRAM_ADDR, $1
.set SP_RD_LEN,    $2
.set SP_WR_LEN,    $3
.set SP_STATUS,    $4
.set SP_DMA_FULL,  $5
.set SP_DMA_BUSY,  $6
.set SP_SEMAPHORE, $7
.set DPC_START,    $8
.set DPC_END,      $9
.set DPC_CURRENT,  $10
.set DPC_STATUS,   $11
.set DPC_CLOCK,    $12
.set DPC_BUFBUSY,  $13
.set DPC_PIPEBUSY, $14
.set DPC_TMEM,     $15

/* DPC_STATUS read flags.  */
.set DPC_STATUS_XBUS_DMEM_DMA, 0x001
.set DPC_STATUS_FREEZE,        0x002
.set DPC_STATUS_FLUSH,         0x004
.set DPC_STATUS_START_GCLK,    0x008
.set DPC_STATUS_TMEM_BUSY,     0x010
.set DPC_STATUS_PIPE_BUSY,     0x020
.set DPC_STATUS_CMD_BUSY,      0x040
.set DPC_STATUS_CBUF_READY,    0x080
.set DPC_STATUS_DMA_BUSY,      0x100
.set DPC_STATUS_END_VALID,     0x200
.set DPC_STATUS_START_VALID,   0x400

/* DPC_STATUS write flags.  */
.set DPC_CLR_XBUS_DMEM_DMA, 0x0001
.set DPC_SET_XBUS_DMEM_DMA, 0x0002
.set DPC_CLR_FREEZE,        0x0004
.set DPC_SET_FREEZE,        0x0008
.set DPC_CLR_FLUSH,         0x0010
.set DPC_SET_FLUSH,         0x0020
.set DPC_CLR_TMEM_CTR,      0x0040
.set DPC_CLR_PIPE_CTR,      0x0080
.set DPC_CLR_CMD_CTR,       0x0100
.set DPC_CLR_CLOCK_CTR,     0x0200

/* SP_STATUS read flags.  */
.set SP_STATUS_HALT,       0x0001
.set SP_STATUS_BROKE,      0x0002
.set SP_STATUS_DMA_BUSY,   0x0004
.set SP_STATUS_DMA_FULL,   0x0008
.set SP_STATUS_IO_FULL,    0x0010
.set SP_STATUS_SSTEP,      0x0020
.set SP_STATUS_INTR_BREAK, 0x0040
.set SP_STATUS_SIG0,       0x0080 /* yield     */
.set SP_STATUS_SIG1,       0x0100 /* yielded   */
.set SP_STATUS_SIG2,       0x0200 /* task done */
.set SP_STATUS_SIG3,       0x0400
.set SP_STATUS_SIG4,       0x0800
.set SP_STATUS_SIG5,       0x1000
.set SP_STATUS_SIG6,       0x2000
.set SP_STATUS_SIG7,       0x4000

/* SP_STATUS write flags.  */
.set SP_CLR_HALT,       0x0000001
.set SP_SET_HALT,       0x0000002
.set SP_CLR_BROKE,      0x0000004
.set SP_CLR_INTR,       0x0000008
.set SP_SET_INTR,       0x0000010
.set SP_CLR_SSTEP,      0x0000020
.set SP_SET_SSTEP,      0x0000040
.set SP_CLR_INTR_BREAK, 0x0000080
.set SP_SET_INTR_BREAK, 0x0000100
.set SP_CLR_SIG0,       0x0000200
.set SP_SET_SIG0,       0x0000400
.set SP_CLR_SIG1,       0x0000800
.set SP_SET_SIG1,       0x0001000
.set SP_CLR_SIG2,       0x0002000
.set SP_SET_SIG2,       0x0004000
.set SP_CLR_SIG3,       0x0008000
.set SP_SET_SIG3,       0x0010000
.set SP_CLR_SIG4,       0x0020000
.set SP_SET_SIG4,       0x0040000
.set SP_CLR_SIG5,       0x0080000
.set SP_SET_SIG5,       0x0100000
.set SP_CLR_SIG6,       0x0200000
.set SP_SET_SIG6,       0x0400000
.set SP_CLR_SIG7,       0x0800000
.set SP_SET_SIG7,       0x1000000
